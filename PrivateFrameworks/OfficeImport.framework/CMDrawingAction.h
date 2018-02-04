/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawingAction : NSObject {
    float  _floatValue;
    int  _type;
    id  _value;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (float)floatValue;
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;
- (id)initWithType:(int)arg1 andValue:(id)arg2;
- (int)type;
- (id)value;

@end
