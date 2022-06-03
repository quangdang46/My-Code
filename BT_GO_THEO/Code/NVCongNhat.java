public class NVCongNhat extends NhanVien{
    private int soNgay;
    public NVCongNhat(int ma, String ten, String gioiTinh, String ngaySinh, String diaChi,int soNgay) {
        super(ma, ten, gioiTinh, ngaySinh, diaChi);
        this.soNgay = soNgay;
    }
    public NVCongNhat(){
        
    }
    public int getSoNgay() {
        return this.soNgay;
    }
    public void setSoNgay(int soNgay) {
        this.soNgay = soNgay;
    }


    @Override
    public double tinhLuong() {
        return this.soNgay*300000;
    }
    
    @Override
    public String toString() {
        return super.toString() + "_" + this.soNgay;
    }

}
