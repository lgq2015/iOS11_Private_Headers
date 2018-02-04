/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextBoxMaker : NSObject {
    CPBody * bodyZone;
    CPZone * mainZone;
}

+ (void)boxLayoutsIn:(id)arg1;
+ (void)promoteLayoutsIn:(id)arg1;

- (void)boxLayout:(id)arg1;
- (void)boxLayoutsIn:(id)arg1;
- (bool)layoutIsSliced:(id)arg1;
- (void)makeBoxesWith:(id)arg1 parent:(id)arg2;
- (void)promoteLayoutsIn:(id)arg1;
- (void)promoteLayoutsInCertainRegions:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateTextBox:(id)arg1;

@end
