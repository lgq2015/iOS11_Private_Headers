/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSQuerySuggestion : NSObject {
    NSString * _identifier;
    id  _tag;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) id tag;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 type:(long long)arg3 tag:(id)arg4;
- (id)tag;
- (id)title;
- (long long)type;

@end
