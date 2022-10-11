package main

import "fmt"

func insertionSort(a []int) {
	ln := len(a)
	for i := 1; i < ln; i++ {
		key := a[i]
		j := i - 1
		for j >= 0 && a[j] > key {
			a[j+1] = a[j]
			j--
		}
		a[j+1] = key
	}
}

func main() {
	a := []int{5, 2, 4, 6, 1, 3}
	insertionSort(a)
	fmt.Println(a)
}
