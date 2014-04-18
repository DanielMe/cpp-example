{-# LANGUAGE ForeignFunctionInterface #-}

module Example.Interface where

--import Foreign.Ptr
--import Foreign.C
--import Foreign.Marshal.Array


foreign import ccall unsafe "example_interface.h c_test" runTest :: IO ()
