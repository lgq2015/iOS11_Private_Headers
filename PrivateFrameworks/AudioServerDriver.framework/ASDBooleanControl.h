/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDBooleanControl : ASDControl {
    bool  _settable;
    bool  _value;
    NSObject<OS_dispatch_queue> * _valueQueue;
}

@property (getter=isSettable, nonatomic, readonly) bool settable;
@property (nonatomic) bool value;

+ (id)invertControlWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)jackControlWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)muteControlWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)phantomPowerControlWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;

- (void).cxx_destruct;
- (unsigned int)baseClass;
- (bool)changeValue:(bool)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithPlugin:(id)arg1;
- (id)initWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
- (id)initWithValue:(bool)arg1 isSettable:(bool)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned int)arg6;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isSettable;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
