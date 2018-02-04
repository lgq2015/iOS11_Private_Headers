/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImagePlaceholder : NSObject {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    id /* block */  _cornerPathBlock;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly, copy) id /* block */ cornerPathBlock;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (id /* block */)cornerPathBlock;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(id /* block */)arg4;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4;

@end
