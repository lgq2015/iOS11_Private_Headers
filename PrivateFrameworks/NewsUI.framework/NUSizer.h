/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUSizer : NSObject <NUSizer> {
    bool  _alwaysIntegral;
    NSString * _desc;
    bool  _flexible;
    id /* block */  _sizerBlock;
}

@property (nonatomic, readonly) bool alwaysIntegral;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *desc;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flexible;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ sizerBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)alwaysIntegral;
- (id)desc;
- (id)description;
- (bool)flexible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cursor:(double)arg2 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg3 layoutContext:(id)arg4;
- (id)initWithDescription:(id)arg1 flexible:(bool)arg2 sizerBlock:(id /* block */)arg3;
- (id)initWithDescription:(id)arg1 sizerBlock:(id /* block */)arg2;
- (id /* block */)sizerBlock;

@end
