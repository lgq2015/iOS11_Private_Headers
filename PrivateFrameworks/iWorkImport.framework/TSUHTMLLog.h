/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUHTMLLog : NSObject {
    NSFileHandle * _handle;
    bool  _logStarted;
    NSString * _path;
    NSString * _script;
    NSString * _stylesheet;
    unsigned long long  _tableRow;
    NSString * _title;
    unsigned long long  _uniquifier;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, copy) NSString *script;
@property (nonatomic, copy) NSString *stylesheet;
@property (nonatomic, copy) NSString *title;

- (void)_writeMarkupData:(id)arg1;
- (void)clear;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)logBegin;
- (void)logEnd;
- (void)openInBrowser;
- (id)path;
- (id)script;
- (void)setScript:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)stylesheet;
- (id)title;
- (id)uniqueIdentifierWithPrefix:(id)arg1;
- (void)writeMarkup:(id)arg1;
- (void)writeText:(id)arg1;

@end
