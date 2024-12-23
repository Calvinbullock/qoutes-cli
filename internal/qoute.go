/*
Holds the Quote Strict and associated functions
*/

package main

import (
    "encoding/json"
    "os"
)

type Qoute struct {
    qoute string
    author string
    tags []string
}

func(q *Qoute) print() {
    println(q.qoute)
    println("-", q.author)
}

func(q *Qoute) readToFIle(filePath string ) {

}

func (q *Qoute) readFromFile(filePath string) (err error) {
    file, err := os.Open(filePath)
    if err != nil {
        return err
    }
    defer file.Close()

    decoder := json.NewDecoder(file)
    err = decoder.Decode(q)
    if err != nil {
        return err
    }

    return nil}

/* ============================================================================
* TESTS
* ========================================================================== */

func runQouteTests() {
    readFromFile_testEmpty()

}

/* ====================================
*   readFromFile
* ================================== */

func readFromFile_testEmpty() (bool) {
    filePath := "./tests/empty_qoute.json"
    q := Qoute{}

    err := q.readFromFile(filePath)
    q.print()

    if err != nil {
        return false
    }

    if q.author == "empty" &&
            q.qoute == "empty" &&
            len(q.tags) == 0 {
        return true
    }

    return false
}



