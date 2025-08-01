///
/// HybridNitroImageViewSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNitroImageViewSpec.hpp"

// Forward declaration of `HybridNitroImageViewSpec_cxx` to properly resolve imports.
namespace NitroImage { class HybridNitroImageViewSpec_cxx; }

// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }
// Forward declaration of `ResizeMode` to properly resolve imports.
namespace margelo::nitro::image { enum class ResizeMode; }

#include <optional>
#include <memory>
#include "HybridImageSpec.hpp"
#include "ResizeMode.hpp"

#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

  /**
   * The C++ part of HybridNitroImageViewSpec_cxx.swift.
   *
   * HybridNitroImageViewSpecSwift (C++) accesses HybridNitroImageViewSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridNitroImageViewSpec_cxx can directly inherit from the C++ class HybridNitroImageViewSpec
   * to simplify the whole structure and memory management.
   */
  class HybridNitroImageViewSpecSwift: public virtual HybridNitroImageViewSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridNitroImageViewSpecSwift(const NitroImage::HybridNitroImageViewSpec_cxx& swiftPart):
      HybridObject(HybridNitroImageViewSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroImage::HybridNitroImageViewSpec_cxx& getSwiftPart() noexcept {
      return _swiftPart;
    }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline std::optional<std::shared_ptr<margelo::nitro::image::HybridImageSpec>> getImage() noexcept override {
      auto __result = _swiftPart.getImage();
      return __result;
    }
    inline void setImage(const std::optional<std::shared_ptr<margelo::nitro::image::HybridImageSpec>>& image) noexcept override {
      _swiftPart.setImage(image);
    }
    inline std::optional<ResizeMode> getResizeMode() noexcept override {
      auto __result = _swiftPart.getResizeMode();
      return __result;
    }
    inline void setResizeMode(std::optional<ResizeMode> resizeMode) noexcept override {
      _swiftPart.setResizeMode(resizeMode);
    }

  public:
    // Methods
    

  private:
    NitroImage::HybridNitroImageViewSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::image
