/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDPropertyAddress : NSObject <NSCopying> {
    struct AudioObjectPropertyAddress { 
        unsigned int mSelector; 
        unsigned int mScope; 
        unsigned int mElement; 
    }  _audioObjectPropertyAddress;
}

@property (nonatomic, readonly) struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; } audioObjectPropertyAddress;
@property (nonatomic, readonly) unsigned int element;
@property (nonatomic, readonly) unsigned int scope;
@property (nonatomic, readonly) unsigned int selector;

- (struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })audioObjectPropertyAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)element;
- (unsigned long long)hash;
- (id)initWithAddress:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSelector:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)scope;
- (unsigned int)selector;

@end
