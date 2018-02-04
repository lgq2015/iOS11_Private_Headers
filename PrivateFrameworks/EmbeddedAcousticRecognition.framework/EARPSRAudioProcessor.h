/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARPSRAudioProcessor : NSObject {
    struct shared_ptr<quasar::PSRAudioProcessor> { 
        struct PSRAudioProcessor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _audioProcessor;
    NSString * _configRoot;
    <EARPSRAudioProcessorDelegate> * _delegate;
    unsigned long long  _sampleRate;
    struct SystemConfig { 
        int (**_vptr$OptionsItf)(); 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __first_; 
            } __r_; 
        } jsonConfigFilePath; 
        struct Version { 
            int versionMajor; 
            int versionMinor; 
        } configFileVersion; 
        struct Path { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } str; 
        } configPath; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __first_; 
            } __r_; 
        } prefix; 
        struct PTree { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } dataValue; 
            struct vector<std::__1::pair<std::__1::basic_string<char>, quasar::PTree>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, quasar::PTree> > > { 
                struct pair<std::__1::basic_string<char>, quasar::PTree> {} *__begin_; 
                struct pair<std::__1::basic_string<char>, quasar::PTree> {} *__end_; 
                struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, quasar::PTree> *, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, quasar::PTree> > > { 
                    struct pair<std::__1::basic_string<char>, quasar::PTree> {} *__first_; 
                } __end_cap_; 
            } map; 
            bool isALeaf; 
        } pTree; 
        struct SpeechModelInfo { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } version; 
            struct set<int, std::__1::less<int>, std::__1::allocator<int> > { 
                struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::less<int> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } samplingRates; 
            struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { 
                struct __tree<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char>, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char> > > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } tasks; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } language; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } phoneSetVersion; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } acousticProfileVersion; 
            struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
                struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } aceToQuasarTemplate; 
            struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } quasarTemplateToAce; 
            struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
                struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } quasarTemplateToEnumerationType; 
            int g2pModelVersion; 
            int hybridEndpointerVersion; 
        } speechModelInfo; 
        struct TranslationModelInfo { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } version; 
            struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { 
                struct __tree<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char>, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char> > > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } tasks; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } sourceLanguage; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __first_; 
                } __r_; 
            } targetLanguage; 
        } translationModelInfo; 
        struct shared_ptr<quasar::ModelLoader> { 
            struct ModelLoader {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } modelLoader; 
        struct HybridClientConfigs { 
            struct map<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > > { 
                struct __tree<std::__1::__value_type<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > >, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > >, std::__1::less<int>, true> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } hybridEndpointerThresholds; 
        } hybridClientConfigs; 
        struct map<std::__1::basic_string<char>, bool *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, bool *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, bool *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, bool *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } boolMap; 
        struct map<std::__1::basic_string<char>, int *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } intMap; 
        struct map<std::__1::basic_string<char>, unsigned int *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned int *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned int *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned int *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned int *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned int *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned int *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } uintMap; 
        struct map<std::__1::basic_string<char>, long long *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, long long *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, long long *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, long long *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, long long *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, long long *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, long long *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } int64Map; 
        struct map<std::__1::basic_string<char>, float *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } floatMap; 
        struct map<std::__1::basic_string<char>, double *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, double *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, double *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, double *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, double *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, double *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } doubleMap; 
        struct map<std::__1::basic_string<char>, std::__1::basic_string<char> *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } stringMap; 
        struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } stringVecMap; 
        struct map<std::__1::basic_string<char>, quasar::SystemConfig::Version, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, quasar::SystemConfig::Version> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } paramMinVersionMap; 
        struct map<std::__1::basic_string<char>, quasar::SystemConfig::Version, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, quasar::SystemConfig::Version> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, quasar::SystemConfig::Version>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } paramMaxVersionMap; 
        struct map<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __first_; 
                } __pair3_; 
            } __tree_; 
        } requiredParams; 
        int state; 
        int configType; 
    }  _sysConfig;
}

@property (nonatomic, retain) NSString *configRoot;
@property (nonatomic) <EARPSRAudioProcessorDelegate> *delegate;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_startComputeTask;
- (void)addAudio:(id)arg1;
- (id)configRoot;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;
- (void)resetForNewRequest;
- (void)setConfigRoot:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
