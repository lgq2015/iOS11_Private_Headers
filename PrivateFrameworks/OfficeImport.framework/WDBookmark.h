/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDBookmark : WDRun {
    int  mBookmarkType;
    NSString * mName;
}

- (int)bookmarkType;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;
- (id)name;
- (int)runType;
- (void)setBookmarkType:(int)arg1;
- (void)setName:(id)arg1;

@end
