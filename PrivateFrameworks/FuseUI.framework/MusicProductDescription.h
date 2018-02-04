/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductDescription : NSObject <NSCopying> {
    long long  _format;
    NSString * _storeEditorNotes;
    NSString * _text;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) NSString *storeEditorNotes;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)format;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStoreEditorNotes:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)storeEditorNotes;
- (id)text;

@end
