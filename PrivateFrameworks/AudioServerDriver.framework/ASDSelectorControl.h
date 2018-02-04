/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDSelectorControl : ASDControl {
    unsigned int  _selectedValue;
    bool  _settable;
    NSObject<OS_dispatch_queue> * _valueQueue;
    NSMutableArray * _values;
}

@property (nonatomic) unsigned int selectedValue;
@property (getter=isSettable, nonatomic, readonly) bool settable;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (unsigned int)baseClass;
- (bool)changeValue:(unsigned int)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithIsSettable:(bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4;
- (id)initWithIsSettable:(bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 andObjectClassID:(unsigned int)arg5;
- (id)initWithIsSettable:(bool)arg1 withPlugin:(id)arg2;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isSettable;
- (void)removeValue:(id)arg1;
- (unsigned int)selectedValue;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSelectedValue:(unsigned int)arg1;

@end
