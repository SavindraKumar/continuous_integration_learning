pipeline {
    agent any 
    
    stages {
        
        stage('Unit Test') { 
            steps {
                sh '''
                    ls
                    cd tests
                    ls
                    make
                    ./test_tests -ojunit
                '''                
            }
        }
    }
    
       post {
        always {
            junit 'tests/*.xml'
        }
    }
}
