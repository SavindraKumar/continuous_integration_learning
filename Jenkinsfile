pipeline {
    agent any 
    
     environment {
      CPPUTEST_HOME = "/opt/cpputest"
    }
    stages {
        
        stage('Unit Test') { 
            steps {
                sh '''
                    ls
                    cd tests
                    ls
                    make
                    ./test_tests -ojunit
                    touch *.xml
                    echo $CPPUTEST_HOME
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
