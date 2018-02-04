/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLListCellDataGenerationOperation : QLAsynchronousOperation {
    QLListCell * _cell;
    <QLListCellDataGenerationOperationDelegate> * _delegate;
    bool  _didGenerateSubtitleInformation;
    bool  _didGenerateThumbnail;
    unsigned long long  _index;
    QLItem * _item;
}

@property (nonatomic) QLListCell *cell;
@property (nonatomic) <QLListCellDataGenerationOperationDelegate> *delegate;
@property (nonatomic) unsigned long long index;
@property (nonatomic) QLItem *item;

- (void).cxx_destruct;
- (void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2;
- (void)_didGenerateThumbnail:(id)arg1;
- (void)_finishIfNeeded;
- (id)cell;
- (id)delegate;
- (unsigned long long)index;
- (id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4;
- (id)item;
- (void)main;
- (void)setCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setItem:(id)arg1;

@end
