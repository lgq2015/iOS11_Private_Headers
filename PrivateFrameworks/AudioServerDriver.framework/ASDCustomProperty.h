/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDCustomProperty : NSObject {
    ASDPropertyAddress * _address;
    ASDObject * _owner;
    unsigned int  _propertyDataType;
    unsigned int  _qualifierDataType;
    bool  _settable;
}

@property (nonatomic, readonly, copy) ASDPropertyAddress *address;
@property (nonatomic, readonly) unsigned int element;
@property (nonatomic) ASDObject *owner;
@property (nonatomic, readonly) unsigned int propertyDataType;
@property (nonatomic, readonly) unsigned int qualifierDataType;
@property (nonatomic, readonly) unsigned int scope;
@property (nonatomic, readonly) unsigned int selector;
@property (getter=isSettable, nonatomic) bool settable;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)address;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)arg1 andQualifierData:(const void*)arg2;
- (unsigned int)element;
- (bool)getPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int*)arg3 andData:(void*)arg4 forClient:(int)arg5;
- (id)init;
- (id)initWithAddress:(id)arg1 propertyDataType:(unsigned int)arg2 qualifierDataType:(unsigned int)arg3;
- (id)initWithSelector:(unsigned int)arg1 propertyDataType:(unsigned int)arg2 andQualifierDataType:(unsigned int)arg3;
- (id)initWithSelector:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 propertyDataType:(unsigned int)arg4 andQualifierDataType:(unsigned int)arg5;
- (bool)isSettable;
- (id)owner;
- (unsigned int)propertyDataType;
- (unsigned int)qualifierDataType;
- (unsigned int)scope;
- (unsigned int)selector;
- (void)sendPropertyChangeNotification;
- (void)setOwner:(id)arg1;
- (bool)setPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int)arg3 andData:(const void*)arg4 forClient:(int)arg5;
- (void)setSettable:(bool)arg1;
- (id)value;

@end
