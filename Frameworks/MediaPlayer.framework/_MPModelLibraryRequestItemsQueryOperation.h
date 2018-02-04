/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation {
    MPMediaLibraryView * _libraryView;
    struct shared_ptr<mlcore::Query> { 
        struct Query {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _query;
    id /* block */  _resultHandler;
}

@property (nonatomic, retain) MPMediaLibraryView *libraryView;
@property (nonatomic) struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; } query;
@property (nonatomic, copy) id /* block */ resultHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)execute;
- (id)libraryView;
- (struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })query;
- (id /* block */)resultHandler;
- (void)setLibraryView:(id)arg1;
- (void)setQuery:(struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setResultHandler:(id /* block */)arg1;

@end
