#ifndef _LAMPU_H_
#define _LAMPU_H_
class Lampu {
    private:
        int id;
        bool nyala_lampu;
        static int no_lamp; 
    public:
        Lampu();
        Lampu(int id, bool nyala_lampu);
        Lampu(const Lampu &);            
        Lampu& operator=(const Lampu &);
        ~Lampu();                        
        void set_nyala(int nomor);
        void set_mati(int nomor);
        bool get_info()const;
        void print_info();
};
#endif