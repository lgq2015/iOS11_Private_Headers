/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {
    AKController * _annotationController;
    unsigned long long  tries;
}

@property (nonatomic) AKController *annotationController;

- (void).cxx_destruct;
- (id)annotationController;
- (void)setAnnotationController:(id)arg1;
- (void)setState:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
