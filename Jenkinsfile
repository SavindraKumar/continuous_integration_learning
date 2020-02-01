pipeline {
    agent any 
    
    environment {
      IAR_TOOL_PATH = "C:\\Program Files (x86)\\IAR Systems\\Embedded Workbench 8.3\\common\\bin"
    }
    
    stages {
        stage('Static Analysis') { 
            steps {
                echo "IAR PATH is: $IAR_TOOL_PATH"
            }
        }
        stage('Build') { 
            steps {
                echo 'Build'
            }
        }
        stage('Unit Test') { 
            steps {
                bat '''
                    echo "Multiline shell steps works too"
                    dir
                    cd tests     
                    dir
                '''                
            }
        }
        stage('Code Coverage') { 
            steps {
                echo 'Code Coverage'
            }
        }
    }
}
