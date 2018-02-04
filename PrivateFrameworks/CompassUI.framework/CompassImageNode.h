/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CompassImageNode : NSObject {
    NSString * _imageKey;
    CompassImageNode * _leftChild;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    CompassImageNode * _rightChild;
}

@property (nonatomic, copy) NSString *imageKey;
@property (nonatomic, retain) CompassImageNode *leftChild;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, retain) CompassImageNode *rightChild;

- (void).cxx_destruct;
- (id)imageKey;
- (id)insertImageWithSize:(struct CGSize { double x1; double x2; })arg1 key:(id)arg2;
- (id)leftChild;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)rightChild;
- (void)setImageKey:(id)arg1;
- (void)setLeftChild:(id)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRightChild:(id)arg1;

@end
