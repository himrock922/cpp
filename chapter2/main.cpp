int main()
{
    // 身長の入力
    double height;
    std::cout << "height(m)>";
    std::cin >> height;

    // 体重の入力
    double mass;
    std::cout << "mass(kg)>";
    std::cin >> mass;

    // BMIの計算
    double bmi = mass / (height*height) ;

    // BMIの出力
    std::cout << "BMI="s << bmi << "\n"s ;

    // 状態の判定をする関数
    auto status = []( double bmi )
    {
        if ( bmi < 18.5 )
            return "Underweight.\n"s ;
        else if ( bmi < 25.0 )
            return "Normal.\n"s ;
        else if ( bmi < 30.0 )
            return "Overweight.\n"s ;
        else
            return "Obese."s ;
    } ;

    // 状態の出力
    std::cout << status(bmi) ;
}