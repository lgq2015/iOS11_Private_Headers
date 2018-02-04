/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfDestination : NSObject {
    NSString * _name;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;

+ (id)pdfDestinationWithName:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;

- (void)dealloc;
- (id)initWithName:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (id)name;
- (struct CGPoint { double x1; double x2; })point;

@end
