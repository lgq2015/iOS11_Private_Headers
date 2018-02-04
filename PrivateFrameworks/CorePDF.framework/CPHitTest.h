/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPHitTest : NSObject {
    float  mapTemp;
    NSMutableArray * objectsOnPage;
    CPPage * page;
}

- (id)column:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)columnsAt:(struct CGPoint { double x1; double x2; })arg1;
- (long long)compareByReadingOrder:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2;
- (void)dealloc;
- (id)findBestMatch:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)findClickableObjects:(bool)arg1;
- (id)findObjectIn:(id)arg1 at:(struct CGPoint { double x1; double x2; })arg2 count:(int*)arg3;
- (bool)hitTestGraphicObject:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (bool)hitTestParagraph:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithPage:(id)arg1;
- (id)layoutArea:(struct CGPoint { double x1; double x2; })arg1;
- (id)objectAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)page;
- (id)paragraph:(struct CGPoint { double x1; double x2; })arg1;
- (id)paragraphNear:(struct CGPoint { double x1; double x2; })arg1;
- (id)textLine:(struct CGPoint { double x1; double x2; })arg1;

@end
