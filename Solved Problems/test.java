class test {

    int x = 100;

    void testM() {
        inner i = new inner();
        i.show();
    }

    class inner {
        void show(){
            System.out.println("outer value: "+ x);
        }
    }

    public static void main(String[] args) {
        test t = new test();
        t.testM();;
    }

}