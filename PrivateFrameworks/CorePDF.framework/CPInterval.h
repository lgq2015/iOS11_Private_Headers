/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPInterval : NSObject {
    double  left;
    double  right;
}

- (void)add:(id)arg1;
- (bool)contains:(id)arg1;
- (id)initLeft:(double)arg1 right:(double)arg2;
- (bool)intersects:(id)arg1;
- (double)left;
- (double)right;

@end
