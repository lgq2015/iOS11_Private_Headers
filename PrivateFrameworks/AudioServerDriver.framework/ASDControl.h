/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDControl : ASDObject {
    unsigned int  _controlElement;
    unsigned int  _controlScope;
    unsigned int  _objectClassID;
}

@property (nonatomic) unsigned int controlElement;
@property (nonatomic) unsigned int controlScope;

- (unsigned int)baseClass;
- (unsigned int)controlElement;
- (unsigned int)controlScope;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithPlugin:(id)arg1;
- (bool)isKindOfAudioClass:(unsigned int)arg1;
- (unsigned int)objectClass;
- (void)setControlElement:(unsigned int)arg1;
- (void)setControlScope:(unsigned int)arg1;

@end
