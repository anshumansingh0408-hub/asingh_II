import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'
import Props from './Component/Props.jsx'
import Demo from './Component/Demo.jsx'

function App() {
  const name="React Js Library"
  return (p
    <div>
      <h1>Hello {name}</h1>
      <Props name="Abhay" rollno="12345" course="B.Tech" />
      <Demo/>
    </div>
  )

  
}

export default App
