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
                    script {
                    def testResults = findFiles(glob: '*.xml')
                    for(xml in testResults) {
                        touch xml.getPath()
                    }
                }
            }
        }
    }
    
       post {
        always {
            junit 'tests/*.xml'
        }
    }
}
