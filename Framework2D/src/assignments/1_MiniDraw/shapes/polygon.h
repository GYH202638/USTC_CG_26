#pragma once

#include <vector>

#include "shape.h"

namespace USTC_CG
{
    class Polygon : public Shape
    {
        public:
    Polygon()=default;

    Polygon(
        std::vector<float> x_list, 
        std::vector<float> y_list)
        :x_list_(x_list),
         y_list_(y_list)
    {}

    virtual ~Polygon() = default;

    void draw(const Config& config) const override;

    void update(float x, float y) override;

    void add_control_point(float x, float y) override;

   private:
    std::vector<float> x_list_;
    std::vector<float> y_list_;
    float control_point_x;
    float control_point_y;
    };
}