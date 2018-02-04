/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMagicMoveMatchObject : NSObject {
    NSMutableDictionary * _attributes;
    NSString * _name;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    TSDRep * _rep;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _stringRange;
    NSString * _stringValue;
    long long  _zOrder;
}

@property (nonatomic, retain) NSMutableDictionary *attributes;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, retain) TSDRep *rep;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } stringRange;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) long long zOrder;

+ (id)matchObjectWithRep:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
+ (id)matchObjectWithTextRep:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2 stringValue:(id)arg3 stringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;

- (id)attributes;
- (bool)conflictsWithMatchObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRep:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2 stringValue:(id)arg3 stringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (struct CGPoint { double x1; double x2; })position;
- (id)rep;
- (void)setAttributes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStringValue:(id)arg1;
- (void)setZOrder:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRange;
- (id)stringValue;
- (long long)zOrder;

@end
