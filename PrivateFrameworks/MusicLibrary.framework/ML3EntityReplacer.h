/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3EntityReplacer : NSObject {
    ML3DatabaseConnection * _connection;
    ML3MusicLibrary * _library;
    NSMutableArray * _naturalStatements;
    struct __CFDictionary { } * _propertyToIndexPair;
}

@property (getter=isOpen, nonatomic, readonly) bool open;

- (void).cxx_destruct;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (void)bindPersistentID:(long long)arg1;
- (void)bindValue:(id)arg1 forProperty:(id)arg2;
- (void)clearBindings;
- (void)close;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3;
- (bool)isOpen;
- (bool)perform;

@end
