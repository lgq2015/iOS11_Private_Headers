/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityProviderChangeRecord : NSObject <NSCopying> {
    NSIndexPath * _destinationIndexPath;
    <MusicEntityValueProviding> * _entityValueProvider;
    NSIndexPath * _sourceIndexPath;
    long long  _type;
}

@property (nonatomic, readonly) <MusicEntityValueProviding> *deletedEntityValueProvider;
@property (nonatomic, readonly) NSIndexPath *deletedIndexPath;
@property (nonatomic, readonly) <MusicEntityValueProviding> *insertedEntityValueProvider;
@property (nonatomic, readonly) NSIndexPath *insertedIndexPath;
@property (nonatomic, readonly) NSIndexPath *moveDestinationIndexPath;
@property (nonatomic, readonly) NSIndexPath *moveSourceIndexPath;
@property (nonatomic, readonly) <MusicEntityValueProviding> *movedEntityValueProvider;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedEntityValueProvider;
- (id)deletedIndexPath;
- (id)description;
- (id)init;
- (id)initWithDeletedEntityValueProvider:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithInsertedEntityValueProvider:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithMovedEntityValueProvider:(id)arg1 fromSourceIndexPath:(id)arg2 toDestinationIndexPath:(id)arg3;
- (id)insertedEntityValueProvider;
- (id)insertedIndexPath;
- (id)moveDestinationIndexPath;
- (id)moveSourceIndexPath;
- (id)movedEntityValueProvider;
- (long long)type;

@end
