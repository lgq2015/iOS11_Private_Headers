/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterSavedParameter : NSObject <NSCoding> {
    bool  _debugOnly;
    double  _doubleValue;
    bool  _hasMaxValue;
    bool  _hasMinValue;
    double  _maxValue;
    double  _minValue;
    NSString * _name;
    NSString * _parameterDescription;
    TSUBezierPath * _pathValue;
    bool  _removed;
    unsigned long long  _type;
}

@property (nonatomic) bool debugOnly;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasMaxValue;
@property (nonatomic) bool hasMinValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parameterDescription;
@property (nonatomic, retain) TSUBezierPath *pathValue;
@property (nonatomic) bool removed;
@property (nonatomic) unsigned long long type;

- (void)dealloc;
- (bool)debugOnly;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMaxValue;
- (bool)hasMinValue;
- (id)initWithCoder:(id)arg1;
- (double)maxValue;
- (double)minValue;
- (id)name;
- (id)p_bezierPathFromSavedPathElements:(id)arg1;
- (id)p_savedPathFromPath:(id)arg1;
- (id)parameterDescription;
- (id)pathValue;
- (bool)removed;
- (void)setDebugOnly:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasMaxValue:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setName:(id)arg1;
- (void)setParameterDescription:(id)arg1;
- (void)setPathValue:(id)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
