/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentBlueprint : NSObject <NSCoding, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _absoluteFrame;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _columnRange;
    SXComponent * _component;
    SXComponentLayout * _componentLayout;
    SXComponentSizer * _componentSizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _hasValidPosition;
    bool  _hasValidSize;
    NSDictionary * _infoFromLayouting;
    SXLayoutBlueprint * _parentLayoutBlueprint;
    struct CGSize { 
        double width; 
        double height; 
    }  _suggestedSizeAfterInvalidation;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteFrame;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (nonatomic, readonly) SXComponent *component;
@property (nonatomic, readonly) SXComponentLayout *componentLayout;
@property (nonatomic, retain) SXComponentSizer *componentSizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) bool hasValidLayout;
@property (nonatomic) bool hasValidPosition;
@property (nonatomic) bool hasValidSize;
@property (nonatomic, readonly) NSDictionary *infoFromLayouting;
@property (nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic, readonly) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic) struct CGSize { double x1; double x2; } suggestedSizeAfterInvalidation;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrame;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (id)component;
- (id)componentLayout;
- (id)componentSizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForComponentWidth:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasValidLayout;
- (bool)hasValidPosition;
- (bool)hasValidSize;
- (id)infoFromLayouting;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3;
- (void)invalidateLayout;
- (void)invalidatePosition;
- (void)invalidateSize;
- (id)parentLayoutBlueprint;
- (id)rootLayoutBlueprint;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setComponentSizer:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasValidPosition:(bool)arg1;
- (void)setHasValidSize:(bool)arg1;
- (void)setParentLayoutBlueprint:(id)arg1;
- (void)setSuggestedSizeAfterInvalidation:(struct CGSize { double x1; double x2; })arg1;
- (void)storeInformationForRenderingPhase:(id)arg1;
- (struct CGSize { double x1; double x2; })suggestedSizeAfterInvalidation;
- (void)updatePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSize:(struct CGSize { double x1; double x2; })arg1;

@end
