const arr:Array <number> = [10,16,8,12,15,6,3,9,5];

/*
const swap = (arr:Array<number>, leftIdx:number, rightIdx:number) => {
  arr[leftIdx] ^= arr[rightIdx];
  arr[rightIdx] = arr[leftIdx] ^ arr[rightIdx];
  arr[leftIdx] ^= arr[rightIdx];
} */

const partition = (low: number, high: number, arr: Array<number>) => {
  const pivot = arr[Math.floor((high + low) / 2)];
  let i = low; 
  let j = high;
  while(i <= j) {
    while(arr[i] < pivot) {
      i++;
    }
    while(arr[j] > pivot) {
      j--;
    }

    if (i <= j) {
      [arr[i], arr[j]] = [arr[j], arr[i]];
      //swap(arr, i, j);
      i++;
      j--;
    }
  }
  return i;
}


const quick_sort = (low:number, high:number, arr: Array<number> ): Array <number> => {
  let idx:number;

  if(arr.length > 1) {
    idx = partition(low, high, arr); 
  if(low < idx - 1) {
    quick_sort(low, idx - 1, arr);
  }
  if (idx < high) {
    quick_sort(idx, high, arr);
  }
}
  return arr;
}
console.log(quick_sort(0, arr.length - 1, arr));

