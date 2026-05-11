import Student from './components/Student.jsx'
import './App.css'

function App() {
  return (
    <div className="container">

      <h2>Student Information</h2>

      <Student 
        name="Rahul Sharma" 
        course="Computer Science" 
        marks="85" 
      />

      <Student 
        name="Anita Verma"
        course="Information Technology" 
        marks="92" 
      />

      <Student 
        name="Rohan Gupta" 
        course="Electronics" 
        marks="78" 
      />
      <div className='Credit'>
        <p>ANSHUMAN SINGH</p>
      </div>
    </div>
  )
}

export default App