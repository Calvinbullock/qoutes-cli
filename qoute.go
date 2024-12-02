
package main

type Qoute struct {
    qoute string
    author string
    tags []string
}

func(q *Qoute) print() {
    println(q.qoute)
    println("-", q.author)
}
