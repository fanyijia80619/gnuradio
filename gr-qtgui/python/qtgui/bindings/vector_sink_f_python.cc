/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/qtgui/utils.h>
#include <qwt_legend.h>
#include <qwt_painter.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_zoomer.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_widget.h>
#include <qwt_symbol.h>

#include <gnuradio/qtgui/vector_sink_f.h>
// pydoc.h is automatically generated in the build directory
#include <vector_sink_f_pydoc.h>

void bind_vector_sink_f(py::module& m)
{

    using vector_sink_f = ::gr::qtgui::vector_sink_f;


    py::class_<vector_sink_f,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<vector_sink_f>>(m, "vector_sink_f", D(vector_sink_f))

        .def(py::init(&vector_sink_f::make),
             py::arg("vlen"),
             py::arg("x_start"),
             py::arg("x_step"),
             py::arg("x_axis_label"),
             py::arg("y_axis_label"),
             py::arg("name"),
             py::arg("nconnections") = 1,
             py::arg("parent") = nullptr,
             D(vector_sink_f, make))


        .def("exec_", &vector_sink_f::exec_, D(vector_sink_f, exec_))


        .def(
            "qwidget",
            [](vector_sink_f& self) {
                return reinterpret_cast<uintptr_t>(self.qwidget());
            },
            D(vector_sink_f, qwidget))


        .def("vlen", &vector_sink_f::vlen, D(vector_sink_f, vlen))


        .def("set_vec_average",
             &vector_sink_f::set_vec_average,
             py::arg("avg"),
             D(vector_sink_f, set_vec_average))


        .def("vec_average", &vector_sink_f::vec_average, D(vector_sink_f, vec_average))


        .def("set_x_axis",
             &vector_sink_f::set_x_axis,
             py::arg("start"),
             py::arg("step"),
             D(vector_sink_f, set_x_axis))


        .def("set_y_axis",
             &vector_sink_f::set_y_axis,
             py::arg("min"),
             py::arg("max"),
             D(vector_sink_f, set_y_axis))


        .def("set_ref_level",
             &vector_sink_f::set_ref_level,
             py::arg("ref_level"),
             D(vector_sink_f, set_ref_level))


        .def("set_x_axis_label",
             &vector_sink_f::set_x_axis_label,
             py::arg("label"),
             D(vector_sink_f, set_x_axis_label))


        .def("set_y_axis_label",
             &vector_sink_f::set_y_axis_label,
             py::arg("label"),
             D(vector_sink_f, set_y_axis_label))


        .def("set_x_axis_units",
             &vector_sink_f::set_x_axis_units,
             py::arg("units"),
             D(vector_sink_f, set_x_axis_units))


        .def("set_y_axis_units",
             &vector_sink_f::set_y_axis_units,
             py::arg("units"),
             D(vector_sink_f, set_y_axis_units))


        .def("set_update_time",
             &vector_sink_f::set_update_time,
             py::arg("t"),
             D(vector_sink_f, set_update_time))


        .def("set_title",
             &vector_sink_f::set_title,
             py::arg("title"),
             D(vector_sink_f, set_title))


        .def("set_line_label",
             &vector_sink_f::set_line_label,
             py::arg("which"),
             py::arg("label"),
             D(vector_sink_f, set_line_label))


        .def("set_line_color",
             &vector_sink_f::set_line_color,
             py::arg("which"),
             py::arg("color"),
             D(vector_sink_f, set_line_color))


        .def("set_line_width",
             &vector_sink_f::set_line_width,
             py::arg("which"),
             py::arg("width"),
             D(vector_sink_f, set_line_width))


        .def("set_line_style",
             &vector_sink_f::set_line_style,
             py::arg("which"),
             py::arg("style"),
             D(vector_sink_f, set_line_style))


        .def("set_line_marker",
             &vector_sink_f::set_line_marker,
             py::arg("which"),
             py::arg("marker"),
             D(vector_sink_f, set_line_marker))


        .def("set_line_alpha",
             &vector_sink_f::set_line_alpha,
             py::arg("which"),
             py::arg("alpha"),
             D(vector_sink_f, set_line_alpha))


        .def("title", &vector_sink_f::title, D(vector_sink_f, title))


        .def("line_label",
             &vector_sink_f::line_label,
             py::arg("which"),
             D(vector_sink_f, line_label))


        .def("line_color",
             &vector_sink_f::line_color,
             py::arg("which"),
             D(vector_sink_f, line_color))


        .def("line_width",
             &vector_sink_f::line_width,
             py::arg("which"),
             D(vector_sink_f, line_width))


        .def("line_style",
             &vector_sink_f::line_style,
             py::arg("which"),
             D(vector_sink_f, line_style))


        .def("line_marker",
             &vector_sink_f::line_marker,
             py::arg("which"),
             D(vector_sink_f, line_marker))


        .def("line_alpha",
             &vector_sink_f::line_alpha,
             py::arg("which"),
             D(vector_sink_f, line_alpha))


        .def("set_size",
             &vector_sink_f::set_size,
             py::arg("width"),
             py::arg("height"),
             D(vector_sink_f, set_size))


        .def("enable_menu",
             &vector_sink_f::enable_menu,
             py::arg("en") = true,
             D(vector_sink_f, enable_menu))


        .def("enable_grid",
             &vector_sink_f::enable_grid,
             py::arg("en") = true,
             D(vector_sink_f, enable_grid))


        .def("enable_autoscale",
             &vector_sink_f::enable_autoscale,
             py::arg("en") = true,
             D(vector_sink_f, enable_autoscale))


        .def("clear_max_hold",
             &vector_sink_f::clear_max_hold,
             D(vector_sink_f, clear_max_hold))


        .def("clear_min_hold",
             &vector_sink_f::clear_min_hold,
             D(vector_sink_f, clear_min_hold))


        .def("reset", &vector_sink_f::reset, D(vector_sink_f, reset))

        ;
}
