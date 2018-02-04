/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBLBookItem : NSObject {
    NSString * _author;
    NSString * _identifier;
    NSString * _legacyUniqueIdentifier;
    NSString * _path;
    NSString * _storeIdentifier;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *legacyUniqueIdentifier;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)author;
- (id)identifier;
- (id)legacyUniqueIdentifier;
- (id)path;
- (void)setAuthor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegacyUniqueIdentifier:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)storeIdentifier;
- (id)title;
- (long long)type;

@end