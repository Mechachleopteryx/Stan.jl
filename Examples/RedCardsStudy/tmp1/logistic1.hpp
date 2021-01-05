
// Code generated by stanc 8188136
#include <stan/model/model_header.hpp>
namespace logistic1_model_namespace {


inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}

inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}


using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 

static int current_statement__ = 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 20, column 2 to column 17)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 24, column 2 to column 26)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 25, column 2 to column 25)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 26, column 2 to line 27, column 46)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 13, column 2 to column 17)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 14, column 26 to column 27)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 14, column 2 to column 29)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 15, column 23 to column 24)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 15, column 2 to column 26)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 16, column 9 to column 10)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 16, column 2 to column 19)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 17, column 2 to column 25)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 7, column 4 to line 9, column 70)",
                                                      " (in '/Users/rob/.julia/dev/Stan/Examples/RedCardsStudy/tmp1/logistic1.stan', line 6, column 37 to line 10, column 3)"};

template <bool propto__>
struct partial_sum_lpmf_rsfunctor__;
template <bool propto__, typename T4__, typename T5__>
stan::promote_args_t<stan::value_type_t<T4__>,
stan::value_type_t<T5__>>
partial_sum_lpmf(const std::vector<int>& slice_n_redcards, const int& start,
                 const int& end, const std::vector<int>& n_games,
                 const T4__& rating_arg__, const T5__& beta_arg__,
                 std::ostream* pstream__) {
  using local_scalar_t__ = stan::promote_args_t<stan::value_type_t<T4__>,
          stan::value_type_t<T5__>>;
  const auto& rating = to_ref(rating_arg__);
  const auto& beta = to_ref(beta_arg__);
  local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
  (void) DUMMY_VAR__;  // suppress unused var warning
  
  try {
    double lcm_sym1__;
    {
      current_statement__ = 13;
      return binomial_logit_lpmf<propto__>(slice_n_redcards,
               rvalue(n_games,
                 cons_list(index_min_max(start, end), nil_index_list()),
                 "n_games"),
               add(beta[(1 - 1)],
                 multiply(beta[(2 - 1)],
                   rvalue(rating,
                     cons_list(index_min_max(start, end), nil_index_list()),
                     "rating"))));
    }
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
  }
  
}

struct partial_sum_lpmf_functor__ {
template <bool propto__, typename T4__, typename T5__>
stan::promote_args_t<stan::value_type_t<T4__>,
stan::value_type_t<T5__>>
operator()(const std::vector<int>& slice_n_redcards, const int& start,
           const int& end, const std::vector<int>& n_games,
           const T4__& rating, const T5__& beta, std::ostream* pstream__)  const 
{
return partial_sum_lpmf<propto__>(slice_n_redcards, start, end, n_games,
         rating, beta, pstream__);
}
};


template <bool propto__>
struct partial_sum_lpmf_rsfunctor__ {
template <typename T4__, typename T5__>
stan::promote_args_t<stan::value_type_t<T4__>,
stan::value_type_t<T5__>>
operator()(const std::vector<int>& slice_n_redcards, const int& start,
           const int& end, std::ostream* pstream__,
           const std::vector<int>& n_games, const T4__& rating,
           const T5__& beta)  const 
{
return partial_sum_lpmf<propto__>(slice_n_redcards, start + 1, end + 1,
         n_games, rating, beta, pstream__);
}
};

class logistic1_model final : public model_base_crtp<logistic1_model> {

 private:
  double lcm_sym21__;
  double lcm_sym20__;
  int lcm_sym19__;
  int lcm_sym18__;
  int lcm_sym17__;
  int lcm_sym16__;
  int lcm_sym15__;
  int lcm_sym14__;
  int N;
  std::vector<int> n_redcards;
  std::vector<int> n_games;
  Eigen::Matrix<double, -1, 1> rating;
  int grainsize;
 
 public:
  ~logistic1_model() { }
  
  inline std::string model_name() const final { return "logistic1_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 8188136", "stancflags = --warn-pedantic --O"};
  }
  
  
  logistic1_model(stan::io::var_context& context__,
                  unsigned int random_seed__ = 0,
                  std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "logistic1_model_namespace::logistic1_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      
      
      
      
      
      
      
      
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 5;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 5;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 5;
      current_statement__ = 5;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 6;
      validate_non_negative_index("n_redcards", "N", N);
      current_statement__ = 7;
      context__.validate_dims("data initialization","n_redcards","int",
          context__.to_vec(N));
      n_redcards = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 7;
      assign(n_redcards, nil_index_list(), context__.vals_i("n_redcards"),
        "assigning variable n_redcards");
      lcm_sym14__ = logical_gte(N, 1);
      if (lcm_sym14__) {
        current_statement__ = 7;
        current_statement__ = 7;
        check_greater_or_equal(function__, "n_redcards[sym1__]",
                               n_redcards[(1 - 1)], 0);
        for (int sym1__ = 2; sym1__ <= N; ++sym1__) {
          current_statement__ = 7;
          current_statement__ = 7;
          check_greater_or_equal(function__, "n_redcards[sym1__]",
                                 n_redcards[(sym1__ - 1)], 0);}
      } 
      current_statement__ = 8;
      validate_non_negative_index("n_games", "N", N);
      current_statement__ = 9;
      context__.validate_dims("data initialization","n_games","int",
          context__.to_vec(N));
      n_games = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 9;
      assign(n_games, nil_index_list(), context__.vals_i("n_games"),
        "assigning variable n_games");
      current_statement__ = 9;
      if (lcm_sym14__) {
        current_statement__ = 9;
        current_statement__ = 9;
        check_greater_or_equal(function__, "n_games[sym1__]",
                               n_games[(1 - 1)], 0);
        for (int sym1__ = 2; sym1__ <= N; ++sym1__) {
          current_statement__ = 9;
          current_statement__ = 9;
          check_greater_or_equal(function__, "n_games[sym1__]",
                                 n_games[(sym1__ - 1)], 0);}
      } 
      current_statement__ = 10;
      validate_non_negative_index("rating", "N", N);
      current_statement__ = 11;
      context__.validate_dims("data initialization","rating","double",
          context__.to_vec(N));
      rating = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(rating, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<double> rating_flat__;
        current_statement__ = 11;
        assign(rating_flat__, nil_index_list(), context__.vals_r("rating"),
          "assigning variable rating_flat__");
        current_statement__ = 11;
        pos__ = 1;
        current_statement__ = 11;
        if (lcm_sym14__) {
          current_statement__ = 11;
          assign(rating, cons_list(index_uni(1), nil_index_list()),
            rating_flat__[(1 - 1)], "assigning variable rating");
          current_statement__ = 11;
          pos__ = 2;
          for (int sym1__ = 2; sym1__ <= N; ++sym1__) {
            current_statement__ = 11;
            assign(rating, cons_list(index_uni(sym1__), nil_index_list()),
              rating_flat__[(pos__ - 1)], "assigning variable rating");
            current_statement__ = 11;
            pos__ = (pos__ + 1);}
        } 
      }
      current_statement__ = 12;
      context__.validate_dims("data initialization","grainsize","int",
          context__.to_vec());
      grainsize = std::numeric_limits<int>::min();
      
      current_statement__ = 12;
      grainsize = context__.vals_i("grainsize")[(1 - 1)];
      current_statement__ = 12;
      current_statement__ = 12;
      check_greater_or_equal(function__, "grainsize", grainsize, 1);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 2;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "logistic1_model_namespace::log_prob";
(void) function__;  // suppress unused var warning

    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      double lcm_sym13__;
      double lcm_sym12__;
      double lcm_sym11__;
      Eigen::Matrix<local_scalar_t__, -1, 1> beta;
      beta = Eigen::Matrix<local_scalar_t__, -1, 1>(2);
      stan::math::fill(beta, DUMMY_VAR__);
      
      current_statement__ = 1;
      beta = in__.vector(2);
      {
        current_statement__ = 2;
        lp_accum__.add(normal_lpdf<propto__>(beta[(1 - 1)], 0, 10));
        current_statement__ = 3;
        lp_accum__.add(normal_lpdf<propto__>(beta[(2 - 1)], 0, 1));
        current_statement__ = 4;
        lp_accum__.add(
          reduce_sum<partial_sum_lpmf_rsfunctor__<propto__>>(n_redcards,
            grainsize, pstream__, n_games, rating, beta));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "logistic1_model_namespace::write_array";
(void) function__;  // suppress unused var warning

    (void) function__;  // suppress unused var warning

    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      double lcm_sym10__;
      double lcm_sym9__;
      int lcm_sym8__;
      int lcm_sym7__;
      Eigen::Matrix<double, -1, 1> beta;
      beta = Eigen::Matrix<double, -1, 1>(2);
      stan::math::fill(beta, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      beta = in__.vector(2);
      {
        vars__.emplace_back(beta[(1 - 1)]);
        {
          vars__.emplace_back(beta[(2 - 1)]);
        }
      }
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      double lcm_sym6__;
      double lcm_sym5__;
      double lcm_sym4__;
      double lcm_sym3__;
      int lcm_sym2__;
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      Eigen::Matrix<double, -1, 1> beta;
      beta = Eigen::Matrix<double, -1, 1>(2);
      stan::math::fill(beta, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<double> beta_flat__;
        current_statement__ = 1;
        assign(beta_flat__, nil_index_list(), context__.vals_r("beta"),
          "assigning variable beta_flat__");
        current_statement__ = 1;
        pos__ = 1;
        {
          current_statement__ = 1;
          assign(beta, cons_list(index_uni(1), nil_index_list()),
            beta_flat__[(1 - 1)], "assigning variable beta");
          current_statement__ = 1;
          pos__ = 2;
          {
            current_statement__ = 1;
            assign(beta, cons_list(index_uni(2), nil_index_list()),
              beta_flat__[(pos__ - 1)], "assigning variable beta");
            current_statement__ = 1;
            pos__ = (pos__ + 1);
          }
        }
      }
      {
        vars__.emplace_back(beta[(1 - 1)]);
        {
          vars__.emplace_back(beta[(2 - 1)]);
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("beta");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(2)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym22__ = 1; sym22__ <= 2; ++sym22__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym22__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym22__ = 1; sym22__ <= 2; ++sym22__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym22__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" << 2 << "},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" << 2 << "},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  

    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        

};
}
using stan_model = logistic1_model_namespace::logistic1_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

#endif


