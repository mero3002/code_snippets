/////// Datatype---------------------------------------
// let name = "mostafa"
// console.log(typeof name)
// name = 25
// console.log(typeof name)
// let flag = true
// console.log( flag)
// let name = null
// console.log(typeof name)
// let name = undefined
// console.log( typeof name)
///-----------------------------let vs var vs const----------------
// const x = 25
// x ="hamde"
// console.log(x)
// {
// if(true){
//     let x = 25
// }
// console.log(x)
// }
// const now = 2026
// const birth = 1998
// const age = now -birth
// console.log(age)
// const n = "hamde"
// const m = "15"
// // const x = m+n
// // console.log(x)
// // "mostafa tarek"
// const x = n-m
// console.log(x)
// console.log(typeof x)
//nan == not availd number
// let x = 25
// // x+=10
// x*=2
// console.log(x)
///---------- function
//declaration
// function hello(x){
//     console.log("hello")
//     return x

// }
//  let hamde=hello(33)
//  console.log(hamde)
//  function hello(x="randa"){
//     //default pramter
//     console.log(x)
//  }
//  hello(25)
/////////////////////function expression
// let hello = function (){
//     console.log("hello from expression")
// }
// hello()
// let sum = function(x,y){
//     return x+y
// }

// console.log( sum(5,5))
//// Arrow function-------------------------
// let myarrow = ()=> console.log("arrow func")
// myarrow()
// let mysum = (x,y)=> x+y
// console.log(mysum(10,20))
// let mysum =(x,y)=>{
//     console.log("arrow func")
//      return x+y
// }
// console.log(mysum(20,30))
//////  hoisting------
// console.log(x)
// var x = 5
// console.log(y)
// let y =30
// console.log(z)
// const z = "hamde"
// hello()

// function hello(){
//     console.log("hello")
// }

// hello()
// let hello = function  (){
//     console.log("hello")
// }
// console.log(hello())
// var hello = function  (){
//     console.log("hello")
// }
//////==== String concatenation
// let fname = "ali"
// let lname = "omer"
// let age = 25
// // console.log("myname"+fname+lname+age)
// console.log(`myname ${fname} ${lname} and my age ${age}`)

////////if else
    // let x = "10"
    // if(x===10){
    //     console.log("we are true")
    // }
    // else{
    //     console.log("we are false")
    // }

    // let x = "10"
    // x==10 ? console.log("we are true"):console.log("we are flase")

/// falsy valus = 0 ,flase, null ,"",undefiend,nan
// let x =15
// if(x){
//     console.log("we are true")
// }

// let user = null
// let loginuser = user ??"Admin user"
// console.log(loginuser)
// switch statement 
// let day = "hamde"
// switch (day) {
//     case "friday":
//         console.log("we are in off day");
//         break;
//     case "sunday":
//         console.log("we are in first  day sum traning")
//         break;
//     default:
//         console.log("we are in default case")   
// }