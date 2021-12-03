/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(fft_filter_ccc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b60da421cce8fefb6a140d0bd2387a01)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/fft_filter_ccc.h>
// pydoc.h is automatically generated in the build directory
#include <fft_filter_ccc_pydoc.h>

void bind_fft_filter_ccc(py::module& m)
{
    using fft_filter_ccc = gr::filter::fft_filter_ccc;


    py::class_<fft_filter_ccc,
               gr::sync_decimator,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<fft_filter_ccc>>(m, "fft_filter_ccc", D(fft_filter_ccc))

        .def(py::init(&fft_filter_ccc::make),
             py::arg("decimation"),
             py::arg("taps"),
             py::arg("nthreads") = 1,
             D(fft_filter_ccc, make))


        .def("set_taps",
             &fft_filter_ccc::set_taps,
             py::arg("taps"),
             D(fft_filter_ccc, set_taps))


        .def("taps", &fft_filter_ccc::taps, D(fft_filter_ccc, taps))


        .def("set_nthreads",
             &fft_filter_ccc::set_nthreads,
             py::arg("n"),
             D(fft_filter_ccc, set_nthreads))


        .def("nthreads", &fft_filter_ccc::nthreads, D(fft_filter_ccc, nthreads))

        ;
}