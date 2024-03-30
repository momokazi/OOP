namespace GPA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            comboBox1.Items.Add(4);
            comboBox1.Items.Add(3);
            comboBox1.Items.Add(2);
            comboBox1.Items.Add(1);

            comboBox2.Items.Add(4);
            comboBox2.Items.Add(3);
            comboBox2.Items.Add(2);
            comboBox2.Items.Add(1);

            comboBox3.Items.Add(4);
            comboBox3.Items.Add(3);
            comboBox3.Items.Add(2);
            comboBox3.Items.Add(1);

            comboBox4.Items.Add(4);
            comboBox4.Items.Add(3);
            comboBox4.Items.Add(2);
            comboBox4.Items.Add(1);

            comboBox5.Items.Add(4);
            comboBox5.Items.Add(3);
            comboBox5.Items.Add(2);
            comboBox5.Items.Add(1);

            comboBox6.Items.Add(4);
            comboBox6.Items.Add(3);
            comboBox6.Items.Add(2);
            comboBox6.Items.Add(1);

        }
        int ans;
        double marks1;
        double marks2;
        double marks3;
        double marks4;
        double marks5;
        double marks6;

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            ans = 1;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            

            switch (ans)
            {

                case 1:
                    
                    marks1 = Convert.ToDouble(textBox1.Text);
                    if(marks1>100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }
                    else if (marks1 >= 80)
                    {
                        marks1 = 4.0;
                        marks1 = marks1 * Convert.ToDouble(comboBox1.SelectedItem);
                        

                    }
                    else if (marks1 >= 70)
                    {
                        marks1 = 3.0;
                        marks1 = marks1 * Convert.ToDouble(comboBox1.SelectedItem);
                        
                    }
                    else if (marks1 >= 60)
                    {
                        marks1 = 2.0;
                        marks1 = marks1 * Convert.ToDouble(comboBox1.SelectedItem);
                        
                    }
                    else if (marks1 >= 50)
                    {
                        marks1 = 1.0;
                        marks1 = marks1 * Convert.ToDouble(comboBox1.SelectedItem);
                        
                    }

                    else
                    {
                        marks1 = 0;
                        
                    }
                    break;

                case 2:
                    marks2 = Convert.ToDouble(textBox2.Text);
                    if (marks1 > 100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }

                    else if (marks2 >= 80)
                    {
                        marks2 = 4.0;
                        marks2 = marks2 * Convert.ToDouble(comboBox2.SelectedItem);
                        

                    }
                    else if (marks2 >= 70)
                    {
                        marks2 = 3.0;
                        marks2 = marks2 * Convert.ToDouble(comboBox2.SelectedItem);
                        
                    }
                    else if (marks2 >= 60)
                    {
                        marks2 = 2.0;
                        marks2 = marks2 * Convert.ToDouble(comboBox2.SelectedItem);
                        
                    }
                    else if (marks2 >= 50)
                    {
                        marks2 = 1.0;
                        marks2 = marks2 * Convert.ToDouble(comboBox2.SelectedItem);
  
                    }

                    else
                    {
                        marks2 = 0;
                    }
                    break;

                case 3:

                    marks3 = Convert.ToDouble(textBox3.Text);
                    if (marks1 > 100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }
                    else if (marks3 >= 80)
                    {
                        marks3 = 4.0;
                        marks3 = marks3 * Convert.ToDouble(comboBox4.SelectedItem);
                    }
                    else if (marks3 >= 70)
                    {
                        marks3 = 3.0;
                        marks3 = marks3 * Convert.ToDouble(comboBox4.SelectedItem);
                        
                    }
                    else if (marks3 >= 60)
                    {
                        marks3 = 2.0;
                        marks3 = marks3 * Convert.ToDouble(comboBox4.SelectedItem);
                        
                    }
                    else if (marks3 >= 50)
                    {
                        marks3 = 1.0;
                        marks3 = marks3 * Convert.ToDouble(comboBox4.SelectedItem);
                    }

                    else
                    {
                        marks3 = 0;
                    }
                    break;

                case 4:

                    marks4 = Convert.ToDouble(textBox4.Text);
                    if (marks1 > 100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }
                    else if (marks4 >= 80)
                    {
                        marks4 = 4.0;
                        marks4 = marks4 * Convert.ToDouble(comboBox3.SelectedItem);

                    }
                    else if (marks4 >= 70)
                    {
                        marks4 = 3.0;
                        marks4 = marks4 * Convert.ToDouble(comboBox3.SelectedItem);
                    }
                    else if (marks4 >= 60)
                    {
                        marks4 = 2.0;
                        marks4 = marks4 * Convert.ToDouble(comboBox3.SelectedItem);
                    }
                    else if (marks4 >= 50)
                    {
                        marks4 = 1.0;
                        marks4 = marks4 * Convert.ToDouble(comboBox3.SelectedItem);
                    }

                    else
                    {
                        marks4 = 0;
                    }
                    break;

                case 5:

                    marks5 = Convert.ToDouble(textBox5.Text);
                    if (marks1 > 100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }
                    else if (marks5 >= 80)
                    {
                        marks5 = 4.0;
                        marks5 = marks5 * Convert.ToDouble(comboBox6.SelectedItem);

                    }
                    else if (marks5 >= 70)
                    {
                        marks5 = 3.0;
                        marks5 = marks5 * Convert.ToDouble(comboBox6.SelectedItem);
                    }
                    else if (marks5 >= 60)
                    {
                        marks5 = 2.0;
                        marks5 = marks5 * Convert.ToDouble(comboBox6.SelectedItem);
                    }
                    else if (marks5 >= 50)
                    {
                        marks5 = 1.0;
                        marks5 = marks5 * Convert.ToDouble(comboBox6.SelectedItem);
                    }

                    else
                    {
                        marks5 = 0;
                    }
                    break;

                case 6:

                    marks6 = Convert.ToDouble(textBox6.Text);
                    if (marks1 > 100 || marks1 < 0)
                    {
                        MessageBox.Show("Please Enter Valid Marks! ");
                    }
                    else if (marks6 >= 80)
                    {
                        marks6 = 4.0;
                        marks6 = marks6 * Convert.ToDouble(comboBox5.SelectedItem);

                    }
                    else if (marks6 >= 70)
                    {
                        marks6 = 3.0;
                        marks6 = marks6 * Convert.ToDouble(comboBox5.SelectedItem);
                        
                    }
                    else if (marks6 >= 60)
                    {
                        marks6 = 2.0;
                        marks6 = marks6 * Convert.ToDouble(comboBox5.SelectedItem);
                    }
                    else if (marks6 >= 50)
                    {
                        marks6 = 1.0;
                        marks6 = marks6 * Convert.ToDouble(comboBox5.SelectedItem);
                    }

                    else
                    {
                        marks6 = 0;
                                                
                    }
                    break;

                default:
                    MessageBox.Show("Please Input Marks Correctly!");
                    break;
            }
            
            double a = marks1 + marks2 + marks3 + marks4 + marks5 + marks6;

            double b = Convert.ToDouble(comboBox1.SelectedItem)
                + Convert.ToDouble(comboBox2.SelectedItem)
                + Convert.ToDouble(comboBox3.SelectedItem)
                + Convert.ToDouble(comboBox4.SelectedItem)
                + Convert.ToDouble(comboBox5.SelectedItem)
                + Convert.ToDouble(comboBox6.SelectedItem);

            double sum = a / b;
            label16.Visible = true;
            label15.Visible = true;


            label15.Text = sum.ToString();


        }


        private void label15_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            ans = 2;
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            ans = 3;
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            ans = 4;
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {
            ans = 5;
        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {
            ans = 6;
        }
    }
}

/*else
                        {
                            if (marks >= 80 || marks <= 89)
                            {
                                marks = 4.0;
                                label15.Visible = true;
                                label16.Visible = true;
                                
                            }
                            else if (marks >= 70 || marks <= 79)
                            {
                                marks = 3.0;
                                label15.Visible = true;
                                label16.Visible = true;
                                label15.Text = marks.ToString();
                            }
                            else if (marks >= 60 || marks <= 69)
                            {
                                marks = 2.0;
                                label15.Visible = true;
                                label16.Visible = true;
                                label15.Text = marks.ToString();
                            }
                            else if (marks >= 50 || marks <= 59)
                            {
                                marks = 1.0;
                                label15.Visible = true;
                                label16.Visible = true;
                                label15.Text = marks.ToString();
                            }
                            else if (marks >= 0 || marks <= 49)
                            {
                                marks = 0;
                                label15.Visible = true;
                                label16.Visible = true;
                                label15.Text = marks.ToString();
                            }
                            else
                                MessageBox.Show("lun kha");

                        }*/




/*double marks = 0.0;
marks = Int32.Parse(textBox1.Text);

if (textBox1.Text == "")
{
    MessageBox.Show("Please Input Marks!");
}

if (marks > 100 || marks < 0)
{
    label15.Visible = false;
    label16.Visible = false;
    MessageBox.Show("Please Input Valid Marks!");
}

if (marks >= 80 || marks <= 89)
{
    marks = 4.0;
    label15.Visible = true;
    label16.Visible = true;
    marks = marks * int.Parse(comboBox1.SelectedItem.ToString());
    label15.Text = Convert.ToDouble(marks).ToString();
}
if (marks >= 70 || marks <= 79)
{
    marks = 3.0;
    label15.Visible = true;
    label16.Visible = true;
    marks = marks * int.Parse(comboBox1.SelectedItem.ToString());
    label15.Text = Convert.ToDouble(marks).ToString();
}
if (marks >= 60 || marks <= 69)
{
    marks = 2.0 * int.Parse(comboBox1.SelectedItem.ToString());
    label15.Visible = true;
    label16.Visible = true;
    //double gpp=0;
    //gpp = marks * ;
    label15.Text = marks.ToString();
}
if (marks >= 50 || marks <= 59)
{
    marks = 1.0;
    label15.Visible = true;
    label16.Visible = true;
    marks = marks * int.Parse(comboBox1.SelectedItem.ToString());
    label15.Text = Convert.ToDouble(marks).ToString();
}
if (marks < 50)
{
    marks = 0;
    label15.Visible = true;
    label16.Visible = true;
    marks = marks * int.Parse(comboBox1.SelectedItem.ToString());
    label15.Text = Convert.ToDouble(marks).ToString();
}
*/