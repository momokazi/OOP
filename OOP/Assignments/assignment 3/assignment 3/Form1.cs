using System;
namespace assignment_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int count;
        
        //operations
        private void button1_Click(object sender, EventArgs e)
        {
            string a = "+";
            label8.Text = a;
            count = 1;
        }
        
        private void button1_Click_2(object sender, EventArgs e)
        {

            string a = "-";
            label8.Text = a;
            count = 2;
            }

        private void button2_Click(object sender, EventArgs e)
        {
            string a = "X";
            label8.Text = a;
            count = 4;
            }

        private void button3_Click(object sender, EventArgs e)
        {
            string a = "/";
            label8.Text = a;
            count = 3;
            }
        private void button4_Click_1(object sender, EventArgs e)
        {
            string a = "%";
            label8.Text = a;
            count = 5;
        }

        private void button5_Click_1(object sender, EventArgs e)
        {
            string a = "^";
            label8.Text = a;
            count = 6;
        }



        //textboxes
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }
        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            label6.Text = textBox4.Text;
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {
            label7.Text = textBox5.Text;
        }

        //labels



        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
        private void label2_Click(object sender, EventArgs e)
        {

        }
        private void label4_Click(object sender, EventArgs e)
        {

        }
        private void label5_Click(object sender, EventArgs e)
        {

        }
        private void button14_Click_1(object sender, EventArgs e)
        {
            textBox4.Clear();
            textBox5.Clear();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button15_Click(object sender, EventArgs e)
        {
            switch (count)
            { 
                case 1:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int c = Int32.Parse(textBox4.Text);
                        int d = Int32.Parse(textBox5.Text);

                        int sum = c + d;
                        label3.Text = sum.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }

                        break;
                    
                case 2:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int a = Int32.Parse(textBox4.Text);
                        int b = Int32.Parse(textBox5.Text);

                        int minus = a - b;
                        label3.Text = minus.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }
                    break;

                case 3:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int l = Int32.Parse(textBox4.Text);
                        int f = Int32.Parse(textBox5.Text);

                        int divide = l / f;
                        label3.Text = divide.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }
                    break;

                case 4:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int x = Int32.Parse(textBox4.Text);
                        int y = Int32.Parse(textBox5.Text);

                        int mul = x * y;
                        label3.Text = mul.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }
                    break;
                
                case 5:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int x = Int32.Parse(textBox4.Text);
                        int y = Int32.Parse(textBox5.Text);

                        double mod = x % y;
                        label3.Text = mod.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }
                    break;
                
                case 6:
                    if (textBox4.Text == "" || textBox5.Text == "")
                    {
                        MessageBox.Show("Please Input Both Numbers!");
                    }
                    else
                    {
                        int x = Int32.Parse(textBox4.Text);
                        int y = Int32.Parse(textBox5.Text);

                        double pow=Math.Pow(x,y);
                        label3.Text = pow.ToString();
                        label2.Visible = true;
                        label3.Visible = true;
                    }
                    break;

                default:
                    MessageBox.Show("Please performa a valid operation!");
                    break;
            }
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }
    }
}

