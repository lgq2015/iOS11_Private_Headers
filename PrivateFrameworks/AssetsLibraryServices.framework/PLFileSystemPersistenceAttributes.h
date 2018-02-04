/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary * _attributes;
}

- (id)UUIDStringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)getInt32:(int*)arg1 forKey:(id)arg2;
- (bool)getUInt16:(unsigned short*)arg1 forKey:(id)arg2;
- (bool)getUInt64:(unsigned long long*)arg1 forKey:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)stringForKey:(id)arg1;

@end
