/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPProcessor : NSObject {
    struct stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > > { struct deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > { struct __split_buffer<std::__1::pair<const Action *, int> *, std::__1::allocator<std::__1::pair<const Action *, int> *> > { struct pair<const Action *, int> {} **x_1_2_1; struct pair<const Action *, int> {} **x_1_2_2; struct pair<const Action *, int> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<const Action *, int> **, std::__1::allocator<std::__1::pair<const Action *, int> *> > { struct pair<const Action *, int> {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<const Action *, int> > > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * mActionStack;
    SFUZipArchive * mArchive;
    struct __CFBundle { } * mBundle;
    SFUCryptoKey * mCryptoKey;
    GQSDocument * mDocumentState;
    SFUZipInflateInputStream * mInputStream;
    unsigned char  mIsProgressive;
    struct __QLPreviewRequest { } * mOutputPreviewRequest;
    struct _xmlParserInputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; unsigned long long x9; } * mParserInputBuffer;
    struct _xmlTextReader { } * mReader;
    struct stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > > { struct deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > { struct __split_buffer<std::__1::shared_ptr<StateSpec> *, std::__1::allocator<std::__1::shared_ptr<StateSpec> *> > { struct shared_ptr<StateSpec> {} **x_1_2_1; struct shared_ptr<StateSpec> {} **x_1_2_2; struct shared_ptr<StateSpec> {} **x_1_2_3; struct __compressed_pair<std::__1::shared_ptr<StateSpec> **, std::__1::allocator<std::__1::shared_ptr<StateSpec> *> > { struct shared_ptr<StateSpec> {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * mStateStack;
    struct CGSize { 
        double width; 
        double height; 
    }  mThumbnailSize;
    unsigned long long  mTotalBytesToConsume;
    bool  mWrongFormat;
}

+ (struct _xmlTextReader { }*)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3;
+ (struct _xmlTextReader { }*)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id*)arg4 zipInputStream:(id*)arg5;
+ (void)initialize;

- (struct stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > > { struct deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > { struct __split_buffer<std::__1::pair<const Action *, int> *, std::__1::allocator<std::__1::pair<const Action *, int> *> > { struct pair<const Action *, int> {} **x_1_2_1; struct pair<const Action *, int> {} **x_1_2_2; struct pair<const Action *, int> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<const Action *, int> **, std::__1::allocator<std::__1::pair<const Action *, int> *> > { struct pair<const Action *, int> {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<const Action *, int> > > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)actionStack;
- (id)archive;
- (struct __CFBundle { }*)bundle;
- (id)cryptoKey;
- (void)dealloc;
- (id)documentState;
- (bool)go;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (bool)isWrongFormat;
- (void)pushInitialState;
- (void)setBundle:(struct __CFBundle { }*)arg1;
- (void)setProgressiveMode:(unsigned char)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWrongFormat:(bool)arg1;
- (struct stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > > { struct deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > { struct __split_buffer<std::__1::shared_ptr<StateSpec> *, std::__1::allocator<std::__1::shared_ptr<StateSpec> *> > { struct shared_ptr<StateSpec> {} **x_1_2_1; struct shared_ptr<StateSpec> {} **x_1_2_2; struct shared_ptr<StateSpec> {} **x_1_2_3; struct __compressed_pair<std::__1::shared_ptr<StateSpec> **, std::__1::allocator<std::__1::shared_ptr<StateSpec> *> > { struct shared_ptr<StateSpec> {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)stateStack;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
