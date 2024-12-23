
package main

func main() {
    runTests()

    var qoutesList []Qoute

    q := Qoute{qoute: "To be not to be.", author: "Shakespeare"}
    qoutesList = append(qoutesList, q)

    qoutesList[0].print()
}

func runTests() {
    pass := true

    if !readFromFile_testEmpty() {
        pass = false
        println("\nReadFile Test Failed ❗\n")
    }

    if pass {
        println("\nAll Tests Pass ✅\n")
    }
}
