/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUHasher : NSObject {
    unsigned long long  _currentHash;
}

@property (nonatomic) unsigned long long currentHash;

- (void)addBool:(bool)arg1;
- (void)addInt:(int)arg1;
- (void)addInteger:(long long)arg1;
- (void)addObject:(id)arg1;
- (void)addUnsignedInt:(unsigned int)arg1;
- (void)addUnsignedInteger:(unsigned long long)arg1;
- (unsigned long long)currentHash;
- (unsigned long long)hashValue;
- (id)init;
- (void)p_appendUnsignedInteger:(unsigned long long)arg1;
- (void)setCurrentHash:(unsigned long long)arg1;

@end