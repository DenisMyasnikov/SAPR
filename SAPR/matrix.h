#ifndef MATRIX_H
#define MATRIX_H


#include <vector>
#include <iostream>
#include <QVector>



class Matrix
{


public:

    typedef QVector <QVector<double>> matrix;

    Matrix (matrix &matrix, QVector<double> &replyMatrix)
    {
        m_matrix = matrix;
        m_replys = replyMatrix;
    };

    static void printMatrix(const matrix &printMatrix)
    {
        for (const auto &row : printMatrix)
        {

            for (const auto &elem : row)
            {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "Matrix size is - " << printMatrix.size() << std::endl;
    }

    static void printMatrix(QVector <double> v){
        for (auto &row: v){
            std::cout << row << " ";
        }
        std::cout << "Matrix size is - " << v.size() << std::endl;
    }

    void printMatrix()
    {
        for (const auto &row : m_matrix)
        {

            for (const auto &elem : row)
            {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "Matrix size is - " << m_matrix.size() << std::endl <<std::endl;
    }

    QVector<double> getSolution()
    {
        QVector <double> determines;

        determines.push_back(devideMatrix(m_matrix));

        if (determines[0] == 0)
        {
            return determines;
        }

        for (int i = 0; i < m_matrix.size(); i++)
        {

            int j = 0;

            matrix repMatrix;

            for (auto row : m_matrix)
            {
                row[i] = m_replys[j++];
                repMatrix.push_back(row);
            }
            printMatrix(repMatrix);
            determines.push_back(devideMatrix(repMatrix));
        }

        for (int i = 1; i < determines.size(); i++)
        {
            determines[i] /= determines[0];
        }
        return determines;
    }

    double getDet()
    {
        return devideMatrix(m_matrix);
    }


private:

    QVector <double> m_row;
    matrix m_matrix;
    QVector<double> m_replys;


    double devideMatrix(matrix &in_matrix)
    {
        double result;

        auto sign = 1;

        if(in_matrix.size() > 2)
        {
            for (int i = 0; i < in_matrix.size(); i++)
            {
                QVector<double> inrow;
                matrix newMatrix;
                int j = 0;
                for (const auto &row : in_matrix)
                {
                    if (j == 0)
                    {

                        j++;
                        continue;
                    }
                    else
                    {
                        j++;
                    }
                    int k = 0;
                    for (const auto &elem : row)
                    {
                        if (k == i)
                        {
                            k++;
                            continue;									}
                        else
                        {
                            k++;
                        }
                        inrow.push_back(elem);
                    }
                    newMatrix.push_back(inrow);
                    inrow.clear();
                }
                result = result + sign * in_matrix[0][i] * devideMatrix(newMatrix);
                sign *= -1;
            }
            return result;
        }
        else
        {
            return getDetermine(in_matrix);
        }

    }

    double getDetermine(matrix in_matrix)
    {
        if (in_matrix.size() == 1)
        {
            return in_matrix[0][0];
        }

        return in_matrix[0][0] * in_matrix[1][1] - in_matrix[0][1] * in_matrix[1][0];
    }
};


#endif // MATRIX_H
